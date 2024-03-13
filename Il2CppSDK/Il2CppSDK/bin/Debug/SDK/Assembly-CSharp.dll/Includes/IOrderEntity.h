#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IOrderEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IOrderEntity"));
	}


	template <typename T = OrderComponent*> T get_order() {
		return ((T (*)(IOrderEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasOrder() {
		return ((T (*)(IOrderEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddOrder(int32_t newValue) {
		return ((T (*)(IOrderEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceOrder(int32_t newValue) {
		return ((T (*)(IOrderEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveOrder() {
		return ((T (*)(IOrderEntity*))(Il2CppBase() + 0x0))(this);
	}

};

