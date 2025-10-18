
const Book = {
    Title: "Title",
    Author: "Author",
    Pages: 100,
    Description: "Description.",
};

Book.desc = function() {
    console.log(`${this.Description}`);
}
Book.desc();