open Utils;

requireCSS("./App.css");

let logo = requireAssetURI("./logo.svg");

[@react.component]
let make = (~message) =>
  <div className="App">
    <header className="App-header">
      <img src=logo className="App-logo" alt="logo" />
      <h1 className="App-title"> {React.string(message)} </h1>
    </header>
    <p className="App-intro">
      {React.string("To get started, edit src/App.re and save to reload.")}
    </p>
  </div>;