class Node {
  constructor(data) {
    this.data = data;
    this.next = null;
  }
}

class LinkedList {
  constructor() {
    this.head = null;
    this.length = 0;
  }

  add(data) {
    const node = new Node(data);
    let currentNode = this.head;

    if (!currentNode) {
      this.head = node;
      this.length++;
      return node;
    }

    while (currentNode.next) {
      currentNode = currentNode.next;
    }

    currentNode.next = node;
    this.length++;
    return node;
  }

  indexOf(data) {
    let currentNode = this.head;

    for (let i = 0; i < this.length; i++) {
      if (currentNode.data === data) {
        return i;
      }
    }

    return -1;
  }

  remove(index) {
    if (index < 0 || index > this.length) {
      return null;
    }

    let currentNode = this.head;
    let prevNode = null;

    for (let i = 0; i < index; i++) {
      prevNode = currentNode;
      currentNode = currentNode.next;
    }

    prevNode.next = currentNode.next;
    currentNode.next = null;
    this.length--;

    return currentNode.data;
  }

  toString() {
    const strArr = [];
    let currentNode = this.head;

    while (currentNode) {
      strArr.push(currentNode.data);
      currentNode = currentNode.next;
    }

    return strArr.join('->');
  }
}

const linkedList = new LinkedList();

linkedList.add(10);
linkedList.add(20);
linkedList.add(30);
linkedList.add(40);
console.log(linkedList.toString());
linkedList.remove(1);
console.log(linkedList.toString());
