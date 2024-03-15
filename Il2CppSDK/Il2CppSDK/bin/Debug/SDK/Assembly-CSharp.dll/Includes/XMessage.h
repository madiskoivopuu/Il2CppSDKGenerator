#pragma once
#include <Il2Cpp/Il2Cpp.h>

class XMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "XMessage"));
	}


	template <typename R = Il2CppString*> R get_PlayerId() {
		return ((R (*)(XMessage*))(Il2CppBase() + 0x1131C98))(this);
	}
	template <typename R = void> R set_PlayerId(Il2CppString* value) {
		return ((R (*)(XMessage*, Il2CppString*))(Il2CppBase() + 0x1131A94))(this, value);
	}
	template <typename R = Il2CppString*> R get_PlayerName() {
		return ((R (*)(XMessage*))(Il2CppBase() + 0x1131CE8))(this);
	}
	template <typename R = void> R set_PlayerName(Il2CppString* value) {
		return ((R (*)(XMessage*, Il2CppString*))(Il2CppBase() + 0x1131AF4))(this, value);
	}
	template <typename R = Il2CppString*> R get_LocationId() {
		return ((R (*)(XMessage*))(Il2CppBase() + 0x1131D38))(this);
	}
	template <typename R = void> R set_LocationId(Il2CppString* value) {
		return ((R (*)(XMessage*, Il2CppString*))(Il2CppBase() + 0x1131B54))(this, value);
	}
	template <typename R = Il2CppString*> R get_Ticks() {
		return ((R (*)(XMessage*))(Il2CppBase() + 0x1131D88))(this);
	}
	template <typename R = void> R set_Ticks(Il2CppString* value) {
		return ((R (*)(XMessage*, Il2CppString*))(Il2CppBase() + 0x1131BB4))(this, value);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R get_Channels() {
		return ((R (*)(XMessage*))(Il2CppBase() + 0x1131DD8))(this);
	}
	template <typename R = void> R set_Channels(Il2CppArray<Il2CppString*>* value) {
		return ((R (*)(XMessage*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1131C14))(this, value);
	}

};

