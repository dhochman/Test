// Jenkinsfile (Declarative Pipeline)
node {
    stage('Checkout') {
        git url: 'https://github.com/dhochman/Test.git'
    }
    stage('Hello') {
        echo 'Hello World'
        sh 'ls -la .'
        sh './hello_world.sh'
    }
}
