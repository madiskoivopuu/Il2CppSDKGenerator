#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TempBuffMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TempBuffMatcher"));
	}

	template <typename T = IMatcher1TempBuffEntity*>*> static T& _matcherActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = IMatcher1TempBuffEntity*>*> static T& _matcherApplyOpenWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = IMatcher1TempBuffEntity*>*> static T& _matcherApplyStartDialogue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = IMatcher1TempBuffEntity*>*> static T& _matcherApplyTargetMagic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = IMatcher1TempBuffEntity*>*> static T& _matcherBlueprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = IMatcher1TempBuffEntity*>*> static T& _matcherDescription() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = IMatcher1TempBuffEntity*>*> static T& _matcherIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = IMatcher1TempBuffEntity*>*> static T& _matcherOldBlueprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = IMatcher1TempBuffEntity*>*> static T& _matcherPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = IMatcher1TempBuffEntity*>*> static T& _matcherPositionTransaction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = IMatcher1TempBuffEntity*>*> static T& _matcherQuests() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = IMatcher1TempBuffEntity*>*> static T& _matcherResources() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = IMatcher1TempBuffEntity*>*> static T& _matcherServerLifeTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = IMatcher1TempBuffEntity*>*> static T& _matcherTemporary() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = IMatcher1TempBuffEntity*>*> static T& _matcherToolTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = IMatcher1TempBuffEntity*>*> static T& _matcherUIPrefab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = IMatcher1TempBuffEntity*>*> static T& _matcherUniqueLookup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = IMatcher1TempBuffEntity*>*> static T& _matcherVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}

	template <typename T = IMatcher1TempBuffEntity*>*> static T get_Active() {
		return ((T (*)(void *))(Il2CppBase() + 0x16B4004))(0);
	}
	template <typename T = IMatcher1TempBuffEntity*>*> static T get_ApplyOpenWindow() {
		return ((T (*)(void *))(Il2CppBase() + 0x16B4184))(0);
	}
	template <typename T = IMatcher1TempBuffEntity*>*> static T get_ApplyStartDialogue() {
		return ((T (*)(void *))(Il2CppBase() + 0x16B4320))(0);
	}
	template <typename T = IMatcher1TempBuffEntity*>*> static T get_ApplyTargetMagic() {
		return ((T (*)(void *))(Il2CppBase() + 0x16B44BC))(0);
	}
	template <typename T = IMatcher1TempBuffEntity*>*> static T get_Blueprint() {
		return ((T (*)(void *))(Il2CppBase() + 0x16B4658))(0);
	}
	template <typename T = IMatcher1TempBuffEntity*>*> static T get_Description() {
		return ((T (*)(void *))(Il2CppBase() + 0x16B47F4))(0);
	}
	template <typename T = IMatcher1TempBuffEntity*>*> static T get_Icon() {
		return ((T (*)(void *))(Il2CppBase() + 0x16B4990))(0);
	}
	template <typename T = IMatcher1TempBuffEntity*>*> static T get_OldBlueprint() {
		return ((T (*)(void *))(Il2CppBase() + 0x16B4B2C))(0);
	}
	template <typename T = IMatcher1TempBuffEntity*>*> static T get_Point() {
		return ((T (*)(void *))(Il2CppBase() + 0x16B4CC8))(0);
	}
	template <typename T = IMatcher1TempBuffEntity*>*> static T get_PositionTransaction() {
		return ((T (*)(void *))(Il2CppBase() + 0x16B4E64))(0);
	}
	template <typename T = IMatcher1TempBuffEntity*>*> static T get_Quests() {
		return ((T (*)(void *))(Il2CppBase() + 0x16B5000))(0);
	}
	template <typename T = IMatcher1TempBuffEntity*>*> static T get_Resources() {
		return ((T (*)(void *))(Il2CppBase() + 0x16B519C))(0);
	}
	template <typename T = IMatcher1TempBuffEntity*>*> static T get_ServerLifeTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x16AFBB4))(0);
	}
	template <typename T = IMatcher1TempBuffEntity*>*> static T get_Temporary() {
		return ((T (*)(void *))(Il2CppBase() + 0x16B5338))(0);
	}
	template <typename T = IMatcher1TempBuffEntity*>*> static T get_ToolTip() {
		return ((T (*)(void *))(Il2CppBase() + 0x16B54D4))(0);
	}
	template <typename T = IMatcher1TempBuffEntity*>*> static T get_UIPrefab() {
		return ((T (*)(void *))(Il2CppBase() + 0x16B5670))(0);
	}
	template <typename T = IMatcher1TempBuffEntity*>*> static T get_UniqueLookup() {
		return ((T (*)(void *))(Il2CppBase() + 0x16AFA18))(0);
	}
	template <typename T = IMatcher1TempBuffEntity*>*> static T get_Version() {
		return ((T (*)(void *))(Il2CppBase() + 0x16B580C))(0);
	}
	template <typename T = IAllOfMatcher1TempBuffEntity*>*> static T AllOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x16B59A8))(0, indices);
	}
	template <typename T = IAllOfMatcher1TempBuffEntity*>*> static T AllOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x16B5A20))(0, matchers);
	}
	template <typename T = IAnyOfMatcher1TempBuffEntity*>*> static T AnyOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x16B5A98))(0, indices);
	}
	template <typename T = IAnyOfMatcher1TempBuffEntity*>*> static T AnyOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x16B5B10))(0, matchers);
	}

};

