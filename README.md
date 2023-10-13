# dwmblocks

Modular status bar for dwm written in c.
This build is based on [Utkarsh Vermas](https://github.com/UtkarshVerma/dwmblocks-async) build.
It uses my personal scripts you can find in my [dotfiles](https://github.com/tiyn/.dotfiles) in the
`~/.local/bin/tools/statusbar` folder.

# Modifying blocks

The statusbar is made from text output from commandline programs.  Blocks are
added and removed by editing the config.c file.

# Signaling changes

Most statusbars constantly rerun every script every several seconds to update.
This is an option here, but a superior choice is giving your module a signal that you can signal to
it to update on a relevant event, rather than having it rerun idly.

For example, the audio module has the update signal 10 by default.
Thus, running `pkill -RTMIN+10 dwmblocks` will update it.

You can also run `kill -44 $(pidof dwmblocks)` which will have the same effect, but is faster.
Just add 34 to your typical signal number.

My volume module *never* updates on its own, instead I have this command run along side my volume
shortcuts in dwm to only update it when relevant.

Note that if you signal an unexpected signal to dwmblocks, it will probably crash.
So if you disable a module, remember to also disable any cronjobs or other scripts that might signal
to that module.

# Clickable modules

Like i3blocks, this build allows you to build in additional actions into your scripts in response
to click events.
See the above linked scripts for examples of this using the `$BLOCK_BUTTON` variable.
