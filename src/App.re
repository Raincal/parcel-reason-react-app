open Utils;

requireCSS("./App.css");

let logo = requireAssetURI("./logo.svg");

let component = ReasonReact.statelessComponent("App");

let make = (~message, _children) => {
  ...component,
  render: _self =>
    <div className="App">
      <header className="App-header">
        <img src=logo className="App-logo" alt="logo" />
        <h1 className="App-title"> (ReasonReact.stringToElement(message)) </h1>
      </header>
    </div>
};