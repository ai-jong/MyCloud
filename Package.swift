// swift-tools-version: 5.10
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "MyCloud",
    platforms: [
        .iOS(.v15),
        .macOS(.v10_15),
    ],
    products: [
        .library(
            name: "MyCloud",
            targets: ["MyCloud"]),
    ],
    dependencies: [
        // Add any dependencies here
    ],
    targets: [
        .binaryTarget(
            name: "MyCloud",
            path: "./MyCloud.xcframework")
    ]
)
