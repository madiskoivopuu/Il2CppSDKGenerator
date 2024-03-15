#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MailStackComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MailStackComponent"));
	}

	template <typename R = int32_t> R& Value() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(MailStackComponent*, Il2CppObject*))(Il2CppBase() + 0x125F5A0))(this, targetObject);
	}

};

