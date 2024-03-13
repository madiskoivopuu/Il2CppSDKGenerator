#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AutoFarmComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AutoFarmComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Prices() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Price() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& PriceStep() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& RandomGroup() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(AutoFarmComponent*, Il2CppObject*))(Il2CppBase() + 0x1A62D18))(this, targetObject);
	}

};

