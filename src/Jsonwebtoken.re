type t;

[@bs.module "jsonwebtoken"] external decode : string => string = "";

[@bs.module "jsonwebtoken"]
external sign : (Js.Dict.t(Js_json.t), string) => string = "";