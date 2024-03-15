#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LogType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LogType"));
	}

	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Text() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = int32_t> R get_Id() {
		return ((R (*)(LogType*))(Il2CppBase() + 0x17272C8))(this);
	}
	template <typename R = void> R set_Id(int32_t value) {
		return ((R (*)(LogType*, int32_t))(Il2CppBase() + 0x17272D0))(this, value);
	}
	template <typename R = Il2CppString*> R get_Text() {
		return ((R (*)(LogType*))(Il2CppBase() + 0x17272D8))(this);
	}
	template <typename R = void> R set_Text(Il2CppString* value) {
		return ((R (*)(LogType*, Il2CppString*))(Il2CppBase() + 0x17272E0))(this, value);
	}

};

