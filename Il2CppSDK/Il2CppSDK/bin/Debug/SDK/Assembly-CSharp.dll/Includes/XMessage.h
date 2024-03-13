#pragma once
#include <Il2Cpp/Il2Cpp.h>

class XMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "XMessage"));
	}


	template <typename T = Il2CppString*> T get_PlayerId() {
		return ((T (*)(XMessage*))(Il2CppBase() + 0x1131C98))(this);
	}
	template <typename T = void> T set_PlayerId(Il2CppString* value) {
		return ((T (*)(XMessage*, Il2CppString*))(Il2CppBase() + 0x1131A94))(this, value);
	}
	template <typename T = Il2CppString*> T get_PlayerName() {
		return ((T (*)(XMessage*))(Il2CppBase() + 0x1131CE8))(this);
	}
	template <typename T = void> T set_PlayerName(Il2CppString* value) {
		return ((T (*)(XMessage*, Il2CppString*))(Il2CppBase() + 0x1131AF4))(this, value);
	}
	template <typename T = Il2CppString*> T get_LocationId() {
		return ((T (*)(XMessage*))(Il2CppBase() + 0x1131D38))(this);
	}
	template <typename T = void> T set_LocationId(Il2CppString* value) {
		return ((T (*)(XMessage*, Il2CppString*))(Il2CppBase() + 0x1131B54))(this, value);
	}
	template <typename T = Il2CppString*> T get_Ticks() {
		return ((T (*)(XMessage*))(Il2CppBase() + 0x1131D88))(this);
	}
	template <typename T = void> T set_Ticks(Il2CppString* value) {
		return ((T (*)(XMessage*, Il2CppString*))(Il2CppBase() + 0x1131BB4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Channels() {
		return ((T (*)(XMessage*))(Il2CppBase() + 0x1131DD8))(this);
	}
	template <typename T = void> T set_Channels(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(XMessage*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1131C14))(this, value);
	}

};

