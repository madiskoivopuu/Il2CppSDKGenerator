#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DataContext1.h" 

class ConfigsContext : public DataContext1<ConfigEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConfigsContext"));
	}

	template <typename R = Il2CppString*> static R& DEFAULT_DMG() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& DOT_DMG() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& WEAPON_DOT_DMG() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& KILL_DMG() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& HUNGER_DMG() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& THIRST_DMG() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& REFLECT_DMG() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 EntityIndex2ConfigEntity*, ConfigType*>*& _configTypeIndex() {
		return *(EntityIndex2ConfigEntity*, ConfigType*>**)((uintptr_t)this + 0x110);
	}
	 PrimaryEntityIndex2ConfigEntity*, PlayerStatType*>*& _playerStatsIndex() {
		return *(PrimaryEntityIndex2ConfigEntity*, PlayerStatType*>**)((uintptr_t)this + 0x118);
	}
	 PrimaryEntityIndex2ConfigEntity*, IntInt*>*& _gradeIndex() {
		return *(PrimaryEntityIndex2ConfigEntity*, IntInt*>**)((uintptr_t)this + 0x120);
	}
	template <typename R = int32_t> R& MaxFontanelGrade() {
		return *(R*)((uintptr_t)this + 0x128);
	}
	template <typename R = Il2CppArray<ConfigEntity*>*> R& FishingOscillations() {
		return *(R*)((uintptr_t)this + 0x130);
	}
	template <typename R = Il2CppString*> static R& RANDOM_FISHING() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = int32_t> R get_MaxFontanelGrade() {
		return ((R (*)(ConfigsContext*))(Il2CppBase() + 0x15E36F8))(this);
	}
	template <typename R = void> R set_MaxFontanelGrade(int32_t value) {
		return ((R (*)(ConfigsContext*, int32_t))(Il2CppBase() + 0x15E3700))(this, value);
	}
	template <typename R = Il2CppArray<ConfigEntity*>*> R get_FishingOscillations() {
		return ((R (*)(ConfigsContext*))(Il2CppBase() + 0x15E3708))(this);
	}
	template <typename R = void> R set_FishingOscillations(Il2CppArray<ConfigEntity*>* value) {
		return ((R (*)(ConfigsContext*, Il2CppArray<ConfigEntity*>*))(Il2CppBase() + 0x15E3710))(this, value);
	}
	template <typename R = void> R AddEntityIndexes() {
		return ((R (*)(ConfigsContext*))(Il2CppBase() + 0x15E3720))(this);
	}
	template <typename R = void> R Fill(Il2CppDictionary<Il2CppString*, EntityBlueprint*>* blueprints) {
		return ((R (*)(ConfigsContext*, Il2CppDictionary<Il2CppString*, EntityBlueprint*>*))(Il2CppBase() + 0x15E3C7C))(this, blueprints);
	}
	template <typename R = ConfigEntity*> R GetPlayerStatConfig(PlayerStatType* statType) {
		return ((R (*)(ConfigsContext*, PlayerStatType*))(Il2CppBase() + 0x15E4208))(this, statType);
	}
	template <typename R = ConfigEntity*> R GetFontanelGrade(int32_t grade) {
		return ((R (*)(ConfigsContext*, int32_t))(Il2CppBase() + 0x15E426C))(this, grade);
	}

};

