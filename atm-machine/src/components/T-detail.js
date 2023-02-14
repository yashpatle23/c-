import React, { Component, Fragment } from 'react';

class T_Detail extends Component {
  getTotalNotes = (data) => {
    let notes = 0;
    data.forEach((item) => {
      notes = notes + item[1]
    })
    return notes;
  }
  render() {
    const { amount_detail } = this.props
    return (
      <Fragment>
        <h3>You will get following amount</h3>
        {
          amount_detail &&
          <Fragment>
            <div className="amount-details">
              {amount_detail.map((note, index) => (
                <div className="note-detail">{`${note[1]} notes of RS.${note[0]} `}</div>
              ))}
            </div>
            <hr />
            <div><strong>Total Money dispensed: {this.getTotalNotes(amount_detail)}</strong></div>
          </Fragment>
        }
      </Fragment>
    )
  }
}
export default T_Detail
