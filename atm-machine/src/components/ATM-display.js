import React, { Fragment } from 'react'

const ATM_display = (props) => (
  <Fragment>
    <h1>Welcome to ATM</h1>
    <div className="form">
      <div className="label-text">Enter the Amount</div>
      <div className="input-box">
        <input type="number" value={props.amount} min="0" onChange={props.handleAmountChange} placeholder="Enter the Amount.."/>
      </div>
      <div className="submit-button">
        <button type="button" disabled={!props.amount} onClick={props.handleSubmit}>Get Money</button>
      </div>
    </div>
  </Fragment>
)

export default ATM_display