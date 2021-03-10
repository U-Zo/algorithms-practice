class Stack {
  constructor() {
    this.data = [];
  }

  push(data) {
    this.data.push(data);
  }

  pop() {
    return this.data.pop();
  }

  size() {
    return this.data.length;
  }

  peek() {
    return this.data[this.data.length - 1];
  }
}
