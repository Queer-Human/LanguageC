	.text
	.cstring
lC0:
	.ascii "Start\0"
lC1:
	.ascii "END\0"
	.text
	.globl _simulation
_simulation:
LFB1:
	pushq	%rbp
LCFI0:
	movq	%rsp, %rbp
LCFI1:
	subq	$256, %rsp
	leaq	lC0(%rip), %rdi
	call	_puts
	movq	-256(%rbp), %rax
	movq	%rax, -128(%rbp)
	movq	-248(%rbp), %rax
	movq	%rax, -120(%rbp)
	movq	-240(%rbp), %rax
	movq	%rax, -112(%rbp)
	movq	-232(%rbp), %rax
	movq	%rax, -104(%rbp)
	movq	-224(%rbp), %rax
	movq	%rax, -96(%rbp)
	movq	-216(%rbp), %rax
	movq	%rax, -88(%rbp)
	movq	-208(%rbp), %rax
	movq	%rax, -80(%rbp)
	movq	-200(%rbp), %rax
	movq	%rax, -72(%rbp)
	movq	-192(%rbp), %rax
	movq	%rax, -64(%rbp)
	movq	-184(%rbp), %rax
	movq	%rax, -56(%rbp)
	movq	-176(%rbp), %rax
	movq	%rax, -48(%rbp)
	movq	-168(%rbp), %rax
	movq	%rax, -40(%rbp)
	movq	-160(%rbp), %rax
	movq	%rax, -32(%rbp)
	movq	-152(%rbp), %rax
	movq	%rax, -24(%rbp)
	movq	-144(%rbp), %rax
	movq	%rax, -16(%rbp)
	movq	-136(%rbp), %rax
	movq	%rax, -8(%rbp)
	leaq	lC1(%rip), %rdi
	call	_puts
	nop
	leave
LCFI2:
	ret
LFE1:
	.globl _main
_main:
LFB2:
	pushq	%rbp
LCFI3:
	movq	%rsp, %rbp
LCFI4:
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movq	%rsi, -16(%rbp)
	movl	$0, %eax
	call	_simulation
	movl	$0, %eax
	leave
LCFI5:
	ret
LFE2:
	.section __TEXT,__eh_frame,coalesced,no_toc+strip_static_syms+live_support
EH_frame1:
	.set L$set$0,LECIE1-LSCIE1
	.long L$set$0
LSCIE1:
	.long	0
	.byte	0x1
	.ascii "zR\0"
	.byte	0x1
	.byte	0x78
	.byte	0x10
	.byte	0x1
	.byte	0x10
	.byte	0xc
	.byte	0x7
	.byte	0x8
	.byte	0x90
	.byte	0x1
	.align 3
LECIE1:
LSFDE1:
	.set L$set$1,LEFDE1-LASFDE1
	.long L$set$1
LASFDE1:
	.long	LASFDE1-EH_frame1
	.quad	LFB1-.
	.set L$set$2,LFE1-LFB1
	.quad L$set$2
	.byte	0
	.byte	0x4
	.set L$set$3,LCFI0-LFB1
	.long L$set$3
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$4,LCFI1-LCFI0
	.long L$set$4
	.byte	0xd
	.byte	0x6
	.byte	0x4
	.set L$set$5,LCFI2-LCFI1
	.long L$set$5
	.byte	0xc
	.byte	0x7
	.byte	0x8
	.align 3
LEFDE1:
LSFDE3:
	.set L$set$6,LEFDE3-LASFDE3
	.long L$set$6
LASFDE3:
	.long	LASFDE3-EH_frame1
	.quad	LFB2-.
	.set L$set$7,LFE2-LFB2
	.quad L$set$7
	.byte	0
	.byte	0x4
	.set L$set$8,LCFI3-LFB2
	.long L$set$8
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$9,LCFI4-LCFI3
	.long L$set$9
	.byte	0xd
	.byte	0x6
	.byte	0x4
	.set L$set$10,LCFI5-LCFI4
	.long L$set$10
	.byte	0xc
	.byte	0x7
	.byte	0x8
	.align 3
LEFDE3:
	.subsections_via_symbols
