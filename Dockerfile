FROM brainpower/node-cubicle

WORKDIR /root/repo
RUN ext install jaredly.reason-vscode 1.5.2

ADD . ./
RUN yarn
RUN yarn bsb -make-world
RUN yarn bsb