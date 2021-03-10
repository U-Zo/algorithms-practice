class Queue {
  constructor() {
    this.data = [];
  }

  enqueue(data) {
    this.data.push(data);
  }

  dequeue() {
    return this.data.shift();
  }
}
