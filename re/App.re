open ReactNative;

let app () =>
  <View style=Style.(style [flex 1.0, justifyContent `center, alignItems `center])>
    <Text value=(Printf.sprintf "%s" "This is an example app.") />
  </View>;
