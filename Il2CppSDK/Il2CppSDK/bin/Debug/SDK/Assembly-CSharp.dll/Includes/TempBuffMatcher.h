#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TempBuffMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TempBuffMatcher"));
	}

	 static IMatcher1<TempBuffEntity*>*& _matcherActive() {
		return *(IMatcher1<TempBuffEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1<TempBuffEntity*>*& _matcherApplyOpenWindow() {
		return *(IMatcher1<TempBuffEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1<TempBuffEntity*>*& _matcherApplyStartDialogue() {
		return *(IMatcher1<TempBuffEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1<TempBuffEntity*>*& _matcherApplyTargetMagic() {
		return *(IMatcher1<TempBuffEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1<TempBuffEntity*>*& _matcherBlueprint() {
		return *(IMatcher1<TempBuffEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1<TempBuffEntity*>*& _matcherDescription() {
		return *(IMatcher1<TempBuffEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1<TempBuffEntity*>*& _matcherIcon() {
		return *(IMatcher1<TempBuffEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static IMatcher1<TempBuffEntity*>*& _matcherOldBlueprint() {
		return *(IMatcher1<TempBuffEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 static IMatcher1<TempBuffEntity*>*& _matcherPoint() {
		return *(IMatcher1<TempBuffEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	 static IMatcher1<TempBuffEntity*>*& _matcherPositionTransaction() {
		return *(IMatcher1<TempBuffEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	 static IMatcher1<TempBuffEntity*>*& _matcherQuests() {
		return *(IMatcher1<TempBuffEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	 static IMatcher1<TempBuffEntity*>*& _matcherResources() {
		return *(IMatcher1<TempBuffEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	 static IMatcher1<TempBuffEntity*>*& _matcherServerLifeTime() {
		return *(IMatcher1<TempBuffEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	 static IMatcher1<TempBuffEntity*>*& _matcherTemporary() {
		return *(IMatcher1<TempBuffEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	 static IMatcher1<TempBuffEntity*>*& _matcherToolTip() {
		return *(IMatcher1<TempBuffEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	 static IMatcher1<TempBuffEntity*>*& _matcherUIPrefab() {
		return *(IMatcher1<TempBuffEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	 static IMatcher1<TempBuffEntity*>*& _matcherUniqueLookup() {
		return *(IMatcher1<TempBuffEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	 static IMatcher1<TempBuffEntity*>*& _matcherVersion() {
		return *(IMatcher1<TempBuffEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x88);
	}

	 static IMatcher1<TempBuffEntity*>* get_Active() {
		return ((IMatcher1<TempBuffEntity*>* (*)(void *))(Il2CppBase() + 0x16B4004))(0);
	}
	 static IMatcher1<TempBuffEntity*>* get_ApplyOpenWindow() {
		return ((IMatcher1<TempBuffEntity*>* (*)(void *))(Il2CppBase() + 0x16B4184))(0);
	}
	 static IMatcher1<TempBuffEntity*>* get_ApplyStartDialogue() {
		return ((IMatcher1<TempBuffEntity*>* (*)(void *))(Il2CppBase() + 0x16B4320))(0);
	}
	 static IMatcher1<TempBuffEntity*>* get_ApplyTargetMagic() {
		return ((IMatcher1<TempBuffEntity*>* (*)(void *))(Il2CppBase() + 0x16B44BC))(0);
	}
	 static IMatcher1<TempBuffEntity*>* get_Blueprint() {
		return ((IMatcher1<TempBuffEntity*>* (*)(void *))(Il2CppBase() + 0x16B4658))(0);
	}
	 static IMatcher1<TempBuffEntity*>* get_Description() {
		return ((IMatcher1<TempBuffEntity*>* (*)(void *))(Il2CppBase() + 0x16B47F4))(0);
	}
	 static IMatcher1<TempBuffEntity*>* get_Icon() {
		return ((IMatcher1<TempBuffEntity*>* (*)(void *))(Il2CppBase() + 0x16B4990))(0);
	}
	 static IMatcher1<TempBuffEntity*>* get_OldBlueprint() {
		return ((IMatcher1<TempBuffEntity*>* (*)(void *))(Il2CppBase() + 0x16B4B2C))(0);
	}
	 static IMatcher1<TempBuffEntity*>* get_Point() {
		return ((IMatcher1<TempBuffEntity*>* (*)(void *))(Il2CppBase() + 0x16B4CC8))(0);
	}
	 static IMatcher1<TempBuffEntity*>* get_PositionTransaction() {
		return ((IMatcher1<TempBuffEntity*>* (*)(void *))(Il2CppBase() + 0x16B4E64))(0);
	}
	 static IMatcher1<TempBuffEntity*>* get_Quests() {
		return ((IMatcher1<TempBuffEntity*>* (*)(void *))(Il2CppBase() + 0x16B5000))(0);
	}
	 static IMatcher1<TempBuffEntity*>* get_Resources() {
		return ((IMatcher1<TempBuffEntity*>* (*)(void *))(Il2CppBase() + 0x16B519C))(0);
	}
	 static IMatcher1<TempBuffEntity*>* get_ServerLifeTime() {
		return ((IMatcher1<TempBuffEntity*>* (*)(void *))(Il2CppBase() + 0x16AFBB4))(0);
	}
	 static IMatcher1<TempBuffEntity*>* get_Temporary() {
		return ((IMatcher1<TempBuffEntity*>* (*)(void *))(Il2CppBase() + 0x16B5338))(0);
	}
	 static IMatcher1<TempBuffEntity*>* get_ToolTip() {
		return ((IMatcher1<TempBuffEntity*>* (*)(void *))(Il2CppBase() + 0x16B54D4))(0);
	}
	 static IMatcher1<TempBuffEntity*>* get_UIPrefab() {
		return ((IMatcher1<TempBuffEntity*>* (*)(void *))(Il2CppBase() + 0x16B5670))(0);
	}
	 static IMatcher1<TempBuffEntity*>* get_UniqueLookup() {
		return ((IMatcher1<TempBuffEntity*>* (*)(void *))(Il2CppBase() + 0x16AFA18))(0);
	}
	 static IMatcher1<TempBuffEntity*>* get_Version() {
		return ((IMatcher1<TempBuffEntity*>* (*)(void *))(Il2CppBase() + 0x16B580C))(0);
	}
	 static IAllOfMatcher1<TempBuffEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1<TempBuffEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x16B59A8))(0, indices);
	}
	 static IAllOfMatcher1<TempBuffEntity*>* AllOf_1(Il2CppArray<IMatcher1<TempBuffEntity*>*>* matchers) {
		return ((IAllOfMatcher1<TempBuffEntity*>* (*)(void *, Il2CppArray<IMatcher1<TempBuffEntity*>*>*))(Il2CppBase() + 0x16B5A20))(0, matchers);
	}
	 static IAnyOfMatcher1<TempBuffEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1<TempBuffEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x16B5A98))(0, indices);
	}
	 static IAnyOfMatcher1<TempBuffEntity*>* AnyOf_1(Il2CppArray<IMatcher1<TempBuffEntity*>*>* matchers) {
		return ((IAnyOfMatcher1<TempBuffEntity*>* (*)(void *, Il2CppArray<IMatcher1<TempBuffEntity*>*>*))(Il2CppBase() + 0x16B5B10))(0, matchers);
	}

};

