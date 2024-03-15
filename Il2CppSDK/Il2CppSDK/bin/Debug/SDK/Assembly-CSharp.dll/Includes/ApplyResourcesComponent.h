#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyResourcesComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyResourcesComponent"));
	}

	template <typename R = RecipientType*> R& Recipient() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& RandomGroup() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppArray<Resource*>*> R& Values() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ApplyResourcesComponent*, Il2CppObject*))(Il2CppBase() + 0x1895230))(this, target);
	}

};

