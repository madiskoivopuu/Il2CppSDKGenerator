#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseMountTradeStep.h" 

class TypeMountTradeStep : public BaseMountTradeStep
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TypeMountTradeStep"));
	}

	template <typename R = Il2CppArray<TraderTypeItem*>*> R& traderTypeItems() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = MountFuser*> R& _mountFuser() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = Il2CppArray<int32_t>*> R& _result() {
		return *(R*)((uintptr_t)this + 0x60);
	}

	template <typename R = void> R Bind(MountsTraderWindow* window, int32_t step) {
		return ((R (*)(TypeMountTradeStep*, MountsTraderWindow*, int32_t))(Il2CppBase() + 0x102C30C))(this, window, step);
	}
	template <typename R = void> R Show() {
		return ((R (*)(TypeMountTradeStep*))(Il2CppBase() + 0x102C4B4))(this);
	}
	template <typename R = Il2CppArray<int32_t>*> R GetResult() {
		return ((R (*)(TypeMountTradeStep*))(Il2CppBase() + 0x102C68C))(this);
	}

};

