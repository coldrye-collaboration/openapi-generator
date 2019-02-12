# OpenAPI Petstore
#
# This is a sample server Petstore server. For this sample, you can use the api key `special-key` to test the authorization filters.
#
# OpenAPI spec version: 1.0.0
# 
# Generated by: https://openapi-generator.tech


#' Tag Class
#'
#' @field id 
#' @field name 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
Tag <- R6::R6Class(
  'Tag',
  public = list(
    `id` = NULL,
    `name` = NULL,
    initialize = function(`id`, `name`){
      if (!missing(`id`)) {
        stopifnot(is.numeric(`id`), length(`id`) == 1)
        self$`id` <- `id`
      }
      if (!missing(`name`)) {
        stopifnot(is.character(`name`), length(`name`) == 1)
        self$`name` <- `name`
      }
    },
    toJSON = function() {
      TagObject <- list()
      if (!is.null(self$`id`)) {
        TagObject[['id']] <-
          self$`id`
      }
      if (!is.null(self$`name`)) {
        TagObject[['name']] <-
          self$`name`
      }

      TagObject
    },
    fromJSON = function(TagJson) {
      TagObject <- jsonlite::fromJSON(TagJson)
      if (!is.null(TagObject$`id`)) {
        self$`id` <- TagObject$`id`
      }
      if (!is.null(TagObject$`name`)) {
        self$`name` <- TagObject$`name`
      }
    },
    toJSONString = function() {
      sprintf(
        '{
           "id":
             %d,
           "name":
             "%s"
        }',
        self$`id`,
        self$`name`
      )
    },
    fromJSONString = function(TagJson) {
      TagObject <- jsonlite::fromJSON(TagJson)
      self$`id` <- TagObject$`id`
      self$`name` <- TagObject$`name`
    }
  )
)
