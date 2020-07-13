#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class LanguageSettingConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "LanguageSettingConfig"));
	}

	template <typename T = int32_t> T& LanguageCode() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& LocID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = int32_t> T get_LanguageCode() {
		return ((T (*)(LanguageSettingConfig*))(Il2CppBase() + 0x376E9A0))(this);
	}
	template <typename T = void> T set_LanguageCode(int32_t value) {
		return ((T (*)(LanguageSettingConfig*, int32_t))(Il2CppBase() + 0x376E9A8))(this, value);
	}
	template <typename T = Il2CppString*> T get_LocID() {
		return ((T (*)(LanguageSettingConfig*))(Il2CppBase() + 0x376E9B0))(this);
	}
	template <typename T = void> T set_LocID(Il2CppString* value) {
		return ((T (*)(LanguageSettingConfig*, Il2CppString*))(Il2CppBase() + 0x376E9B8))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(LanguageSettingConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x376E9C0))(this, bytes, position);
	}

};

}