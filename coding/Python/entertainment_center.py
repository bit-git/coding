import movie
import fresh_tomatoes

toy_story = movie.Movie("Toy Story",
                        "A story of a boy and his toys that come to life",
                        "http://upload.wikimedia.org/wikipedia/en/1/13/Toy_Story.jpg",
                        "www.youtube.com/watch?v=JcpWXaA2qeg")

##print (toy_story.storyline)
##print (toy_story)

avatar = movie.Movie("Avatar", "A marine on an alien planet",
                     "http://upload.wikimedia.org/wikipedia/en/b/b0/Avatar-Teaser-Poster.jpg",
                     "https://www.youtube.com/watch?v=cRdxXPV9GNQ")

ratatouille = movie.Movie("Rataouille", "A rat is a chef in Paris",
                     "http://upload.wikimedia.org/wikipedia/en/5/50/RatatouillePoster.jpg",
                     "https://www.youtube.com/watch?v=c3sBBRxDAqk")

shawshank_redemption = movie.Movie("Shawshank Redemption", "A marine on an alien planet",
                     "http://upload.wikimedia.org/wikipedia/en/8/81/ShawshankRedemptionMoviePoster.jpg",
                     "https://www.youtube.com/watch?v=6hB3S9bIaco")


##print avatar.storyline
##print avatar.title
##avatar.show_trailer()

movies = [toy_story, avatar, ratatouille, shawshank_redemption]
#fresh_tomatoes.open_movies_page(movies)

print (movie.Movie.VALID_RATINGS)
print (movie.Movie.__doc__)
