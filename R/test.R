# library(survival)
# library(cbr)
#
#
# ovarian$tt <- factor(sample(1:3, 26, replace=T))
# sc <- cbrCoxModel$new(ovarian, endPoint=c("futime", "fustat"))
# sc$getFullDistanceMatrix(ovarian)
# sc$distMat
# sc$getSimilarCases(ovarian, 1)
# sc$validate()
#
#
# val <- cbrValidate$new()
# learnVars <- names(ovarian)
# learnVars <- learnVars[-c(1, 2)]
# val$validate(ovarian, scc, learnVars, TRUE)
#
# ovarian$tt <- factor(sample(1:3, 26, replace = T))
# test <- ovarian[rep(1:26, each=1000), ]
# sc <- cbrCoxModel$new(test, endPoint=c("futime", "fustat"))
# sc$getFullDistanceMatrix(test)
# dim(sc$distMat)
# ss <- sc$getSimilarCases(test, 1)
#
# a <- matrix(1:20, 10, 2)
# b <- matrix(1:18, 9, 2)
# w <- c(1, 1)
# .Call("cbr_get_Distance_Matrix", a, b, w,  PACKAGE = "cbr")
# .Call("cbr_get_nearest_Elements", a, b, w, 2,  PACKAGE = "cbr")
# .Call("cbr_fast_Vector_Order", 1:10, 5, PACKAGE = "cbr")
#
# nearestElements(a, b, w, 2)
#
# test <- function(formula, grouping, data) {
#   a <- model.frame(formula, data=data)
#   browser()
# }
#
# test(~tt, grouping="tt", data=ovarian)