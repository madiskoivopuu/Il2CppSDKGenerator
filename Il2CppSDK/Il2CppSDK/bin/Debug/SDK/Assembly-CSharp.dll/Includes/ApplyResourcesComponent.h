#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyResourcesComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyResourcesComponent"));
	}

	template <typename T = RecipientType*> T& Recipient() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& RandomGroup() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Values() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(ApplyResourcesComponent*, Il2CppObject*))(Il2CppBase() + 0x1895230))(this, target);
	}

};

