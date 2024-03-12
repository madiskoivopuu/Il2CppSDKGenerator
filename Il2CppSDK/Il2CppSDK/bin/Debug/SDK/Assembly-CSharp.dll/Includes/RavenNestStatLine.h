#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RavenNestStatLine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RavenNestStatLine"));
	}

	template <typename T = uintptr_t> T& _title() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _titleText() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _record() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _recordText() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T ShowTitle(Il2CppString* text) {
		return ((T (*)(RavenNestStatLine*, Il2CppString*))(Il2CppBase() + 0x138FA84))(this, text);
	}
	template <typename T = void> T ShowRecord(Il2CppString* text) {
		return ((T (*)(RavenNestStatLine*, Il2CppString*))(Il2CppBase() + 0x138FB18))(this, text);
	}

};

}
