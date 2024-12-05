import React from "react";
import UserList from "./components/UserList";
import PostList from "./components/PostList";
import "./App.css";

const App = () => {
  return (
    <div className="app">
      <h1>API Data Fetching with Custom Hook</h1>
      <UserList />
      <PostList />
    </div>
  );
};

export default App;
