function redirectionUrl(language) {
  const URL = "www.example.org/";
  if (language === "Japanese") {
    return `${URL}ja`;
  } else if (language === "English") {
    return `${URL}en`;
  } else if (language === "Spanish") {
    return `${URL}es`;
  } else if (language === "Russian") {
    return `${URL}ru`;
  } else {
    return URL;
  }
}
