	.file	"main2.c"
	.text
	.section	.rodata
.LC0:
	.string	"arr[%d]:0x%x,addr:%d\n"
.LC1:
	.string	"p_b[%d]:0x%x,addr:%d\n"
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
	subq	$48, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$1056769, -48(%rbp)
	movl	$18878464, -12(%rbp)
	movl	$0, -44(%rbp)
	jmp	.L2
.L3:
	leaq	-12(%rbp), %rdx
	movl	-44(%rbp), %eax
	cltq
	leaq	(%rdx,%rax), %rcx
	movl	-44(%rbp), %eax
	cltq
	movzbl	-12(%rbp,%rax), %eax
	movzbl	%al, %edx
	movl	-44(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	addl	$1, -44(%rbp)
.L2:
	movl	-44(%rbp), %eax
	cmpl	$3, %eax
	jbe	.L3
	movl	$10, %edi
	call	putchar@PLT
	leaq	-48(%rbp), %rax
	movq	%rax, -32(%rbp)
	leaq	-12(%rbp), %rax
	movq	%rax, -24(%rbp)
	movq	-32(%rbp), %rdx
	leaq	1(%rdx), %rax
	movq	%rax, -32(%rbp)
	movq	-24(%rbp), %rax
	leaq	1(%rax), %rcx
	movq	%rcx, -24(%rbp)
	movzbl	(%rdx), %edx
	movb	%dl, (%rax)
	movq	-32(%rbp), %rdx
	leaq	1(%rdx), %rax
	movq	%rax, -32(%rbp)
	movq	-24(%rbp), %rax
	leaq	1(%rax), %rcx
	movq	%rcx, -24(%rbp)
	movzbl	(%rdx), %edx
	movb	%dl, (%rax)
	movq	-32(%rbp), %rdx
	leaq	1(%rdx), %rax
	movq	%rax, -32(%rbp)
	movq	-24(%rbp), %rax
	leaq	1(%rax), %rcx
	movq	%rcx, -24(%rbp)
	movzbl	(%rdx), %edx
	movb	%dl, (%rax)
	movq	-32(%rbp), %rdx
	leaq	1(%rdx), %rax
	movq	%rax, -32(%rbp)
	movq	-24(%rbp), %rax
	leaq	1(%rax), %rcx
	movq	%rcx, -24(%rbp)
	movzbl	(%rdx), %edx
	movb	%dl, (%rax)
	leaq	-48(%rbp), %rax
	movq	%rax, -32(%rbp)
	movl	$0, -40(%rbp)
	jmp	.L4
.L5:
	movl	-40(%rbp), %eax
	movslq	%eax, %rdx
	movq	-32(%rbp), %rax
	leaq	(%rdx,%rax), %rcx
	movl	-40(%rbp), %eax
	movslq	%eax, %rdx
	movq	-32(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	movzbl	%al, %edx
	movl	-40(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	addl	$1, -40(%rbp)
.L4:
	movl	-40(%rbp), %eax
	cmpl	$3, %eax
	jbe	.L5
	movl	$10, %edi
	call	putchar@PLT
	movl	$0, -36(%rbp)
	jmp	.L6
.L7:
	leaq	-12(%rbp), %rdx
	movl	-36(%rbp), %eax
	cltq
	leaq	(%rdx,%rax), %rcx
	movl	-36(%rbp), %eax
	cltq
	movzbl	-12(%rbp,%rax), %eax
	movzbl	%al, %edx
	movl	-36(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	addl	$1, -36(%rbp)
.L6:
	movl	-36(%rbp), %eax
	cmpl	$3, %eax
	jbe	.L7
	movl	$10, %edi
	call	putchar@PLT
	movl	$0, %eax
	movq	-8(%rbp), %rsi
	xorq	%fs:40, %rsi
	je	.L9
	call	__stack_chk_fail@PLT
.L9:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0"
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
