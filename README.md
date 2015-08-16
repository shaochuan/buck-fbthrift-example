# An Example of Thrift server/client built by Buck

## Dependencies
- folly: https://github.com/facebook/folly

```rev: f0852f333e5574390a8c0498575487b8ed0d3c82```

- fbthrift: https://github.com/facebook/fbthrift/

```rev: e71617c04e4426d0706d1c7342de4d2fb543f079```

- Buck: https://github.com/facebook/buck

```rev: 264d12f9fcf4423aeacb2be8e04aea6440ced718```

##How to Run it?
1. Build and run the C++ server:
```
  $ buck build //:main 
  $ ./buck-out/gen/main/main &
```
2. Build and run the Python client:
```
  $ buck build //:client
  $ ./buck-out/gen/client.pex
```

If all goes well, you should see
```
INFO:root:connected
INFO:root:1 + 2 = 3
```
printed on your console.
