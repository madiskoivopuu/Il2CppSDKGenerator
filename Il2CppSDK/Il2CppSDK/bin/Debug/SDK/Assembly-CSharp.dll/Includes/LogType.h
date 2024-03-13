#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LogType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LogType"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Text() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_Id() {
		return ((T (*)(LogType*))(Il2CppBase() + 0x17272C8))(this);
	}
	template <typename T = void> T set_Id(int32_t value) {
		return ((T (*)(LogType*, int32_t))(Il2CppBase() + 0x17272D0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Text() {
		return ((T (*)(LogType*))(Il2CppBase() + 0x17272D8))(this);
	}
	template <typename T = void> T set_Text(Il2CppString* value) {
		return ((T (*)(LogType*, Il2CppString*))(Il2CppBase() + 0x17272E0))(this, value);
	}

};

