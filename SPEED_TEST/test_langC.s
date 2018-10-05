	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 13
	.section	__TEXT,__literal8,8byte_literals
	.p2align	3               ## -- Begin function simulation_structure
LCPI0_0:
	.quad	4607182418800017408     ## double 1
	.section	__TEXT,__text,regular,pure_instructions
	.globl	_simulation_structure
	.p2align	4, 0x90
_simulation_structure:                  ## @simulation_structure
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$1600016, %rsp          ## imm = 0x186A10
	movl	$1, -8(%rbp)
	movl	$0, -4(%rbp)
LBB0_1:                                 ## =>This Inner Loop Header: Depth=1
	cmpl	$100000, -4(%rbp)       ## imm = 0x186A0
	jge	LBB0_4
## %bb.2:                               ##   in Loop: Header=BB0_1 Depth=1
	movsd	LCPI0_0(%rip), %xmm0    ## xmm0 = mem[0],zero
	movl	-8(%rbp), %eax
	cvtsi2sdl	%eax, %xmm1
	movslq	-4(%rbp), %rcx
	movsd	%xmm1, -800016(%rbp,%rcx,8)
	movl	-8(%rbp), %eax
	cvtsi2sdl	%eax, %xmm1
	addsd	%xmm0, %xmm1
	cvttsd2si	%xmm1, %eax
	movl	%eax, -8(%rbp)
## %bb.3:                               ##   in Loop: Header=BB0_1 Depth=1
	movl	-4(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -4(%rbp)
	jmp	LBB0_1
LBB0_4:
	movl	$800000, %eax           ## imm = 0xC3500
	movl	%eax, %edx
	leaq	-800016(%rbp), %rcx
	leaq	-1600016(%rbp), %rsi
	movq	%rsi, %rdi
	movq	%rcx, %rsi
	callq	_memcpy
	addq	$1600016, %rsp          ## imm = 0x186A10
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__literal8,8byte_literals
	.p2align	3               ## -- Begin function simulation_memcpy
LCPI1_0:
	.quad	4607182418800017408     ## double 1
	.section	__TEXT,__text,regular,pure_instructions
	.globl	_simulation_memcpy
	.p2align	4, 0x90
_simulation_memcpy:                     ## @simulation_memcpy
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$1600032, %rsp          ## imm = 0x186A20
	movq	___stack_chk_guard@GOTPCREL(%rip), %rax
	movq	(%rax), %rax
	movq	%rax, -8(%rbp)
	movl	$1, -1600024(%rbp)
	movl	$0, -1600020(%rbp)
LBB1_1:                                 ## =>This Inner Loop Header: Depth=1
	cmpl	$100000, -1600020(%rbp) ## imm = 0x186A0
	jge	LBB1_4
## %bb.2:                               ##   in Loop: Header=BB1_1 Depth=1
	movsd	LCPI1_0(%rip), %xmm0    ## xmm0 = mem[0],zero
	movl	-1600024(%rbp), %eax
	cvtsi2sdl	%eax, %xmm1
	movslq	-1600020(%rbp), %rcx
	movsd	%xmm1, -800016(%rbp,%rcx,8)
	movl	-1600024(%rbp), %eax
	cvtsi2sdl	%eax, %xmm1
	addsd	%xmm0, %xmm1
	cvttsd2si	%xmm1, %eax
	movl	%eax, -1600024(%rbp)
## %bb.3:                               ##   in Loop: Header=BB1_1 Depth=1
	movl	-1600020(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -1600020(%rbp)
	jmp	LBB1_1
LBB1_4:
	movl	$800000, %eax           ## imm = 0xC3500
	movl	%eax, %edx
	leaq	-800016(%rbp), %rcx
	leaq	-1600016(%rbp), %rsi
	movq	%rsi, %rdi
	movq	%rcx, %rsi
	callq	_memcpy
	movq	___stack_chk_guard@GOTPCREL(%rip), %rcx
	movq	(%rcx), %rcx
	movq	-8(%rbp), %rdx
	cmpq	%rdx, %rcx
	jne	LBB1_6
## %bb.5:
	addq	$1600032, %rsp          ## imm = 0x186A20
	popq	%rbp
	retq
LBB1_6:
	callq	___stack_chk_fail
	ud2
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__literal8,8byte_literals
	.p2align	3               ## -- Begin function simulation_substitution
LCPI2_0:
	.quad	4607182418800017408     ## double 1
	.section	__TEXT,__text,regular,pure_instructions
	.globl	_simulation_substitution
	.p2align	4, 0x90
_simulation_substitution:               ## @simulation_substitution
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$1600032, %rsp          ## imm = 0x186A20
	movq	___stack_chk_guard@GOTPCREL(%rip), %rax
	movq	(%rax), %rax
	movq	%rax, -8(%rbp)
	movl	$1, -1600024(%rbp)
	movl	$0, -1600020(%rbp)
LBB2_1:                                 ## =>This Inner Loop Header: Depth=1
	cmpl	$100000, -1600020(%rbp) ## imm = 0x186A0
	jge	LBB2_4
## %bb.2:                               ##   in Loop: Header=BB2_1 Depth=1
	movsd	LCPI2_0(%rip), %xmm0    ## xmm0 = mem[0],zero
	movl	-1600024(%rbp), %eax
	cvtsi2sdl	%eax, %xmm1
	movslq	-1600020(%rbp), %rcx
	movsd	%xmm1, -800016(%rbp,%rcx,8)
	movl	-1600024(%rbp), %eax
	cvtsi2sdl	%eax, %xmm1
	addsd	%xmm0, %xmm1
	cvttsd2si	%xmm1, %eax
	movl	%eax, -1600024(%rbp)
## %bb.3:                               ##   in Loop: Header=BB2_1 Depth=1
	movl	-1600020(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -1600020(%rbp)
	jmp	LBB2_1
LBB2_4:
	movl	$0, -1600020(%rbp)
LBB2_5:                                 ## =>This Inner Loop Header: Depth=1
	cmpl	$100000, -1600020(%rbp) ## imm = 0x186A0
	jge	LBB2_8
## %bb.6:                               ##   in Loop: Header=BB2_5 Depth=1
	movslq	-1600020(%rbp), %rax
	movsd	-800016(%rbp,%rax,8), %xmm0 ## xmm0 = mem[0],zero
	movslq	-1600020(%rbp), %rax
	movsd	%xmm0, -1600016(%rbp,%rax,8)
## %bb.7:                               ##   in Loop: Header=BB2_5 Depth=1
	movl	-1600020(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -1600020(%rbp)
	jmp	LBB2_5
LBB2_8:
	movq	___stack_chk_guard@GOTPCREL(%rip), %rax
	movq	(%rax), %rax
	movq	-8(%rbp), %rcx
	cmpq	%rcx, %rax
	jne	LBB2_10
## %bb.9:
	addq	$1600032, %rsp          ## imm = 0x186A20
	popq	%rbp
	retq
LBB2_10:
	callq	___stack_chk_fail
	ud2
	.cfi_endproc
                                        ## -- End function
	.globl	_test                   ## -- Begin function test
	.p2align	4, 0x90
_test:                                  ## @test
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$96, %rsp
	xorl	%edi, %edi
	leaq	-24(%rbp), %rsi
	movl	$100, -8(%rbp)
	callq	_clock_gettime
	movl	$0, -4(%rbp)
	movl	%eax, -60(%rbp)         ## 4-byte Spill
LBB3_1:                                 ## =>This Inner Loop Header: Depth=1
	movl	-4(%rbp), %eax
	cmpl	-8(%rbp), %eax
	jge	LBB3_4
## %bb.2:                               ##   in Loop: Header=BB3_1 Depth=1
	callq	_simulation_substitution
## %bb.3:                               ##   in Loop: Header=BB3_1 Depth=1
	movl	-4(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -4(%rbp)
	jmp	LBB3_1
LBB3_4:
	xorl	%edi, %edi
	leaq	-40(%rbp), %rsi
	callq	_clock_gettime
	leaq	L_.str(%rip), %rdi
	movq	-24(%rbp), %rsi
	movq	-16(%rbp), %rdx
	movl	%eax, -64(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	leaq	L_.str.1(%rip), %rdi
	movq	-40(%rbp), %rsi
	movq	-32(%rbp), %rdx
	movl	%eax, -68(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	leaq	L_.str.2(%rip), %rdi
	movl	%eax, -72(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	movq	-32(%rbp), %rdx
	cmpq	-16(%rbp), %rdx
	movl	%eax, -76(%rbp)         ## 4-byte Spill
	jge	LBB3_6
## %bb.5:
	leaq	L_.str.3(%rip), %rdi
	movq	-40(%rbp), %rax
	subq	-24(%rbp), %rax
	subq	$1, %rax
	movq	-32(%rbp), %rcx
	addq	$1000000000, %rcx       ## imm = 0x3B9ACA00
	subq	-16(%rbp), %rcx
	movq	%rax, %rsi
	movq	%rcx, %rdx
	movb	$0, %al
	callq	_printf
	movl	%eax, -80(%rbp)         ## 4-byte Spill
	jmp	LBB3_7
LBB3_6:
	leaq	L_.str.3(%rip), %rdi
	movq	-40(%rbp), %rax
	subq	-24(%rbp), %rax
	movq	-32(%rbp), %rcx
	subq	-16(%rbp), %rcx
	movq	%rax, %rsi
	movq	%rcx, %rdx
	movb	$0, %al
	callq	_printf
	movl	%eax, -84(%rbp)         ## 4-byte Spill
LBB3_7:
	leaq	L_.str.4(%rip), %rdi
	movb	$0, %al
	callq	_printf
	movl	%eax, -88(%rbp)         ## 4-byte Spill
	addq	$96, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_main                   ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movl	$0, -4(%rbp)
	movl	%edi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	callq	_test
	xorl	%eax, %eax
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"\351\226\213\345\247\213\346\231\202\345\210\273\343\200\200 = %10ld.%09ld\n"

L_.str.1:                               ## @.str.1
	.asciz	"\347\265\202\344\272\206\346\231\202\345\210\273\343\200\200 = %10ld.%09ld\n"

L_.str.2:                               ## @.str.2
	.asciz	"\347\265\214\351\201\216\345\256\237\346\231\202\351\226\223 = "

L_.str.3:                               ## @.str.3
	.asciz	"%10ld.%09ld"

L_.str.4:                               ## @.str.4
	.asciz	"(\347\247\222)\n"


.subsections_via_symbols
