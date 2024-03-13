#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DataContext1.h" 

class ConfigsContext : public DataContext1<ConfigEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConfigsContext"));
	}

	template <typename T = Il2CppString*> static T& DEFAULT_DMG() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& DOT_DMG() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& WEAPON_DOT_DMG() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& KILL_DMG() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& HUNGER_DMG() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& THIRST_DMG() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& REFLECT_DMG() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = EntityIndex2ConfigEntity*, ConfigType*>*> T& _configTypeIndex() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = PrimaryEntityIndex2ConfigEntity*, PlayerStatType*>*> T& _playerStatsIndex() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = PrimaryEntityIndex2ConfigEntity*, IntInt*>*> T& _gradeIndex() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = int32_t> T& MaxFontanelGrade() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& FishingOscillations() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = Il2CppString*> static T& RANDOM_FISHING() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T get_MaxFontanelGrade() {
		return ((T (*)(ConfigsContext*))(Il2CppBase() + 0x15E36F8))(this);
	}
	template <typename T = void> T set_MaxFontanelGrade(int32_t value) {
		return ((T (*)(ConfigsContext*, int32_t))(Il2CppBase() + 0x15E3700))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_FishingOscillations() {
		return ((T (*)(ConfigsContext*))(Il2CppBase() + 0x15E3708))(this);
	}
	template <typename T = void> T set_FishingOscillations(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ConfigsContext*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x15E3710))(this, value);
	}
	template <typename T = void> T AddEntityIndexes() {
		return ((T (*)(ConfigsContext*))(Il2CppBase() + 0x15E3720))(this);
	}
	template <typename T = void> T Fill(Il2CppDictionary<Il2CppString*, EntityBlueprint*>* blueprints) {
		return ((T (*)(ConfigsContext*, Il2CppDictionary<Il2CppString*, EntityBlueprint*>*))(Il2CppBase() + 0x15E3C7C))(this, blueprints);
	}
	template <typename T = ConfigEntity*> T GetPlayerStatConfig(PlayerStatType* statType) {
		return ((T (*)(ConfigsContext*, PlayerStatType*))(Il2CppBase() + 0x15E4208))(this, statType);
	}
	template <typename T = ConfigEntity*> T GetFontanelGrade(int32_t grade) {
		return ((T (*)(ConfigsContext*, int32_t))(Il2CppBase() + 0x15E426C))(this, grade);
	}

};

