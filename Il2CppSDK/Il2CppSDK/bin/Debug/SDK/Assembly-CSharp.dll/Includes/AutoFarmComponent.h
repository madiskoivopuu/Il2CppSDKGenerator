#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AutoFarmComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AutoFarmComponent"));
	}

	template <typename R = Il2CppArray<PriceItem*>*> R& Prices() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& Price() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> R& PriceStep() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = Il2CppString*> R& RandomGroup() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> R& Count() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(AutoFarmComponent*, Il2CppObject*))(Il2CppBase() + 0x1A62D18))(this, targetObject);
	}

};

