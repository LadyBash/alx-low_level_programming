	.file	"100-print_comb3.c"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$48, -8(%rbp)
	movl	$48, -4(%rbp)
	jmp	.L2
.L8:
	movl	$48, -8(%rbp)
	jmp	.L3
.L7:
	movl	-4(%rbp), %eax
	cmpl	-8(%rbp), %eax
	je	.L4
	movl	-4(%rbp), %eax
	cmpl	-8(%rbp), %eax
	jge	.L4
	movl	-4(%rbp), %eax
	movl	%eax, %edi
	call	putchar@PLT
	movl	-8(%rbp), %eax
	movl	%eax, %edi
	call	putchar@PLT
	cmpl	$57, -8(%rbp)
	jne	.L5
	cmpl	$56, -4(%rbp)
	je	.L10
.L5:
	movl	$44, %edi
	call	putchar@PLT
	movl	$32, %edi
	call	putchar@PLT
.L4:
	addl	$1, -8(%rbp)
.L3:
	cmpl	$57, -8(%rbp)
	jle	.L7
	jmp	.L6
.L10:
	nop
.L6:
	addl	$1, -4(%rbp)
.L2:
	cmpl	$57, -4(%rbp)
	jle	.L8
	movl	$10, %edi
	call	putchar@PLT
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
