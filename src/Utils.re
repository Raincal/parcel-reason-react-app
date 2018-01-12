/* require css file for side effect only */
[@bs.val] external requireCSS : string => unit = "require";

/* require an asset (eg. an image) and return exported string value (image URI) */
[@bs.val] external requireAssetURI : string => string = "require";

[@bs.val] external hot : bool = "module.hot";

[@bs.val] external accept : unit => unit = "module.hot.accept";