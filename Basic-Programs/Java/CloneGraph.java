import java.util.List;
import java.util.Arrays;
import java.util.ArrayList;
import java.util.Map;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Set;
import java.util.LinkedList;
import java.util.Queue;


class Node{
  public int val;
  public List<Node> neighbors;

  public Node(){
    val = 0;
    neighbors = new ArrayList<Node>();
  }

  public Node(int val){
    this.val = val;
    neighbors = new ArrayList<Node>();
  }

  public Node(int val, List<Node> neighbors){
    this.val = val;
    this.neighbors = neighbors;
  }



  // Helper function
  public void printGraph(Node node) {
    Set<Node> visited = new HashSet<>();
    dfs(node, visited);
  }

  private void dfs(Node node, Set<Node> visited) {
    if (node == null || visited.contains(node)) {
        return;
    }

    visited.add(node);

    System.out.print(node.val + " -> ");

    for (Node neighbor : node.neighbors) {
        System.out.print(neighbor.val + " ");
    }
    System.out.println();

    for (Node neighbor : node.neighbors) {
        dfs(neighbor, visited);
    }
  }
}

public class Solution1{
  Map<Node, Node> map = new HashMap<>();
  public Node cloneGraphDFS(Node node) {
      if(node == null) return null;
      // Already cloned
      if (map.containsKey(node)) {
          return map.get(node);
      }
      Node clone = new Node(node.val);
      map.put(node, clone);
      for(Node neighbor: node.neighbors){
          clone.neighbors.add(cloneGraphDFS(neighbor));
      }
      return clone;
  }


  public Node cloneGraphBFS(Node node) {
    if (node == null) return null;

    Map<Node, Node> map = new HashMap<>();
    Queue<Node> queue = new LinkedList<>();

    map.put(node, new Node(node.val));
    queue.offer(node);

    while (!queue.isEmpty()) {
        Node curr = queue.poll();

        for (Node neighbor : curr.neighbors) {
            if (!map.containsKey(neighbor)) {
                map.put(neighbor, new Node(neighbor.val));
                queue.offer(neighbor);
            }
            map.get(curr).neighbors.add(map.get(neighbor));
        }
    }

    return map.get(node);
  }

  public Node dummyGraph(){
    // [[2,4],[1,3],[2,4],[1,3]]
    Node n1 = new Node(1);
    Node n2 = new Node(2);
    Node n3 = new Node(3);
    Node n4 = new Node(4);

    n1.neighbors = Arrays.asList(n2, n4);
    n2.neighbors = Arrays.asList(n1, n3);
    n3.neighbors = Arrays.asList(n2, n4);
    n4.neighbors = Arrays.asList(n1, n3);

    return n1;
  }

  

  public static void run(){
    Solution1 s1 = new Solution1();
    Node startNode = s1.dummyGraph();
    Node startNodeOfClone = s1.cloneGraphBFS(startNode);
    new Node().printGraph(startNodeOfClone);
  }
}
