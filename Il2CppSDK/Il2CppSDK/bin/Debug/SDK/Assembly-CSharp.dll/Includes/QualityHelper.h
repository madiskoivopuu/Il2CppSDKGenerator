#pragma once
#include <Il2Cpp/Il2Cpp.h>

class QualityHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QualityHelper"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& LowVariants() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& MediumVariants() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& HighVariants() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(QualityHelper*))(Il2CppBase() + 0x11C5CB4))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(QualityHelper*))(Il2CppBase() + 0x11C5DB0))(this);
	}
	template <typename T = void> T OnQualityChanged(int32_t quality) {
		return ((T (*)(QualityHelper*, int32_t))(Il2CppBase() + 0x11C5EAC))(this, quality);
	}
	template <typename T = void> T ApplyVariant(Il2CppArray<uintptr_t>* variants) {
		return ((T (*)(QualityHelper*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x11C5EDC))(this, variants);
	}

};

}
