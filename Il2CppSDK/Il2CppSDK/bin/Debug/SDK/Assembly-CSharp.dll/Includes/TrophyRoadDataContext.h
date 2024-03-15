#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DataContext1.h" 
#include "TrophyRoadEntity.h" 

class TrophyRoadDataContext : public DataContext1<TrophyRoadEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TrophyRoadDataContext"));
	}

	template <typename R = Il2CppString*> static R& Upgrade() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& Recipe() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& UniqueLookup() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& _maxDistrictLevel() {
		return *(R*)((uintptr_t)this + 0x10C);
	}
	template <typename R = QuestDataContext*> R& _questsData() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	 Il2CppDictionary<int32_t, int32_t>*& _classRuneSlot() {
		return *(Il2CppDictionary<int32_t, int32_t>**)((uintptr_t)this + 0x118);
	}

	template <typename R = int32_t> R get_MaxDistrictLevel() {
		return ((R (*)(TrophyRoadDataContext*))(Il2CppBase() + 0x10156B8))(this);
	}
	template <typename R = TrophyRoadEntity*> R get_Item(int32_t level) {
		return ((R (*)(TrophyRoadDataContext*, int32_t))(Il2CppBase() + 0x10156C0))(this, level);
	}
	template <typename R = TrophyRoadEntity*> R get_Item_1(IDistrictLevelEntity* entity) {
		return ((R (*)(TrophyRoadDataContext*, IDistrictLevelEntity*))(Il2CppBase() + 0x1015820))(this, entity);
	}
	template <typename R = void> R AddEntityIndexes() {
		return ((R (*)(TrophyRoadDataContext*))(Il2CppBase() + 0x1015B80))(this);
	}
	template <typename R = TrophyRoadEntity*> R GetEntityWithRequiredLevel(int32_t level) {
		return ((R (*)(TrophyRoadDataContext*, int32_t))(Il2CppBase() + 0x1015744))(this, level);
	}
	template <typename R = TrophyRoadEntity*> R GetEntityWithRecipe(Il2CppString* recipe) {
		return ((R (*)(TrophyRoadDataContext*, Il2CppString*))(Il2CppBase() + 0x10164D4))(this, recipe);
	}
	template <typename R = Il2CppString*> R GetCurrentQuestName(int32_t level, bool canBuild) {
		return ((R (*)(TrophyRoadDataContext*, int32_t, bool))(Il2CppBase() + 0x10165B0))(this, level, canBuild);
	}
	 HashSet1TrophyRoadEntity*>* GetEntitiesWithUniqueLookup(Il2CppString* uniqueLookup) {
		return ((HashSet1TrophyRoadEntity*>* (*)(TrophyRoadDataContext*, Il2CppString*))(Il2CppBase() + 0x1016780))(this, uniqueLookup);
	}
	template <typename R = void> R Fill(Il2CppDictionary<Il2CppString*, EntityBlueprint*>* blueprints) {
		return ((R (*)(TrophyRoadDataContext*, Il2CppDictionary<Il2CppString*, EntityBlueprint*>*))(Il2CppBase() + 0x1016840))(this, blueprints);
	}
	template <typename R = int32_t> R GetTRLevelForClassRune(int32_t index) {
		return ((R (*)(TrophyRoadDataContext*, int32_t))(Il2CppBase() + 0x1019DB0))(this, index);
	}

};

