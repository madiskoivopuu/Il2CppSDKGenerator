#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMagicConditionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMagicConditionEntity"));
	}


	template <typename R = MagicConditionComponent*> R get_magicCondition() {
		return ((R (*)(IMagicConditionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasMagicCondition() {
		return ((R (*)(IMagicConditionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddMagicCondition(Nullable1<int32_t>* newMaxCount, Nullable1<int32_t>* newMinCount, Il2CppString* newName, Il2CppString* newTag, Il2CppString* newNoTag, bool newSourceOwns) {
		return ((R (*)(IMagicConditionEntity*, Nullable1<int32_t>*, Nullable1<int32_t>*, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x0))(this, newMaxCount, newMinCount, newName, newTag, newNoTag, newSourceOwns);
	}
	template <typename R = void> R ReplaceMagicCondition(Nullable1<int32_t>* newMaxCount, Nullable1<int32_t>* newMinCount, Il2CppString* newName, Il2CppString* newTag, Il2CppString* newNoTag, bool newSourceOwns) {
		return ((R (*)(IMagicConditionEntity*, Nullable1<int32_t>*, Nullable1<int32_t>*, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x0))(this, newMaxCount, newMinCount, newName, newTag, newNoTag, newSourceOwns);
	}
	template <typename R = void> R RemoveMagicCondition() {
		return ((R (*)(IMagicConditionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

