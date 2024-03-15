#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IOrderEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IOrderEntity"));
	}


	template <typename R = OrderComponent*> R get_order() {
		return ((R (*)(IOrderEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasOrder() {
		return ((R (*)(IOrderEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddOrder(int32_t newValue) {
		return ((R (*)(IOrderEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceOrder(int32_t newValue) {
		return ((R (*)(IOrderEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveOrder() {
		return ((R (*)(IOrderEntity*))(Il2CppBase() + 0x0))(this);
	}

};

