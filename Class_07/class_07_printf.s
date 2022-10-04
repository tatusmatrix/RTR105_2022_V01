	.file	"class_07_printf.c"
	.text
	.section	.rodata
	.align 8
.LC0:
	.string	"Characters (as symbols): %c %c "
.LC1:
	.string	"Characters (as dec): %d %d \n"
.LC2:
	.string	"Characters: %#o %#o \n"
.LC3:
	.string	"Characters: %#x %#x \n"
.LC4:
	.string	"Decimals: %d %ld\n"
	.align 8
.LC5:
	.string	"Preceding with blanks: %10d %d\n"
.LC6:
	.string	"Preceding with zeros: %010d \n"
	.align 8
.LC7:
	.string	"Some different radices: %d %x %o %#x %#o \n"
.LC9:
	.string	"floats: %4.2f %+.0e %E \n"
.LC10:
	.string	"Width trick: %*d \n"
.LC11:
	.string	"A string"
.LC12:
	.string	"%s \n"
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
	movl	$65, %edx
	movl	$97, %esi
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$65, %edx
	movl	$97, %esi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$65, %edx
	movl	$97, %esi
	leaq	.LC2(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$65, %edx
	movl	$97, %esi
	leaq	.LC3(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$650000, %edx
	movl	$1977, %esi
	leaq	.LC4(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$45525445, %edx
	movl	$197455545, %esi
	leaq	.LC5(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$454554, %edx
	movl	$1977455545, %esi
	leaq	.LC5(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$454554, %edx
	movl	$1975545, %esi
	leaq	.LC5(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$45, %edx
	movl	$1975545, %esi
	leaq	.LC5(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$45, %edx
	movl	$1975545, %esi
	leaq	.LC5(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$5, %edx
	movl	$1977455545, %esi
	leaq	.LC5(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$454544, %edx
	movl	$19745, %esi
	leaq	.LC5(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$45444455, %edx
	movl	$1975545, %esi
	leaq	.LC5(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$1977, %esi
	leaq	.LC6(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$100, %r9d
	movl	$100, %r8d
	movl	$100, %ecx
	movl	$100, %edx
	movl	$100, %esi
	leaq	.LC7(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movsd	.LC8(%rip), %xmm1
	movsd	.LC8(%rip), %xmm0
	movq	.LC8(%rip), %rax
	movapd	%xmm1, %xmm2
	movapd	%xmm0, %xmm1
	movq	%rax, %xmm0
	leaq	.LC9(%rip), %rdi
	movl	$3, %eax
	call	printf@PLT
	movl	$10, %edx
	movl	$5, %esi
	leaq	.LC10(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	.LC11(%rip), %rsi
	leaq	.LC12(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.section	.rodata
	.align 8
.LC8:
	.long	776530087
	.long	1074340351
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
