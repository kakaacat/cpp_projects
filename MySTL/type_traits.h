#ifndef MYSTL_TYPE_TRAITS_H
#define MYSTL_TYPE_TRAITS_H

// 这个头文件用于提取类型信息
//迭代器Iterator作为算法对容器操作的桥梁，在面对不同种类型容器的迭代器时，
//为了避免算法麻烦，创建了traits这个中间人来统一向算法提供当前迭代器所指向容器中元素的相关信息

// use standard header for type_traits
#include <type_traits>

namespace mystl
{

	// helper struct

	template <class T, T v>
	struct m_integral_constant
	{
		static constexpr T value = v;
	};

	template <bool b>
	using m_bool_constant = m_integral_constant<bool, b>;

	typedef m_bool_constant<true>  m_true_type;
	typedef m_bool_constant<false> m_false_type;

	/*****************************************************************************************/
	// type traits

	// is_pair

	// --- forward declaration begin
	template <class T1, class T2>
	struct pair;
	// --- forward declaration end

	template <class T>
	struct is_pair : mystl::m_false_type {};

	template <class T1, class T2>
	struct is_pair<mystl::pair<T1, T2>> : mystl::m_true_type {};

} // namespace mystl
#endif // !MYSTL_TYPE_TRAITS_H

