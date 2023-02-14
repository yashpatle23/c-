import React, { Component } from 'react'
import ATM_display from './ATM-display'
import T_Detail from './T-detail'
import './App.css'

class App extends Component {
  constructor(props) {
    super(props);
    this.notes = [2000, 500, 200, 100, 50, 20, 10, 5, 2, 1]
    this.state = {
      amount: null,
      amount_detail: null
    };
  }
  handleAmountChange = (e) => {
    this.setState({ amount: e.target.value })
  }
  handleSubmit = () => {
    let amount = this.state.amount;
    let notes_detail = []
    function getNoteCount(a, n) {
      let note = Math.floor(a / n)
      amount = a % n
      notes_detail.push([n, note])
    }
    this.notes.forEach(note => {
      if (amount >= note) {
        getNoteCount(amount, note)
      }
    })
    this.setState({ amount_detail: notes_detail.reverse() })
  }
  render() {
    return (
      <div className="main">
        <div className="nav-bar">
          Public Bank ATM
        </div>
        <div className="container">
          <div className="atm-display">
            <ATM_display amount={this.state.amount} handleAmountChange={this.handleAmountChange} handleSubmit={this.handleSubmit} />
          </div>
          <div className="t-detail">
            <T_Detail amount_detail={this.state.amount_detail} />
          </div>
        </div>
      </div>
    );
  }
}
export default App