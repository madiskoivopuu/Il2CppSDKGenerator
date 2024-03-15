#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DialogueMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DialogueMatcher"));
	}

	 static IMatcher1DialogueEntity*>*& _matcherActionId() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1DialogueEntity*>*& _matcherActor() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1DialogueEntity*>*& _matcherAlive() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1DialogueEntity*>*& _matcherAnalytics() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1DialogueEntity*>*& _matcherApplyActivateStatue() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1DialogueEntity*>*& _matcherApplyActorMagic() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1DialogueEntity*>*& _matcherApplyConsume() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static IMatcher1DialogueEntity*>*& _matcherApplyLocationMagic() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 static IMatcher1DialogueEntity*>*& _matcherApplyOpenWindow() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	 static IMatcher1DialogueEntity*>*& _matcherBlueprint() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	 static IMatcher1DialogueEntity*>*& _matcherBook() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	 static IMatcher1DialogueEntity*>*& _matcherButton() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	 static IMatcher1DialogueEntity*>*& _matcherContainerAction() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	 static IMatcher1DialogueEntity*>*& _matcherCraftAction() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	 static IMatcher1DialogueEntity*>*& _matcherDailyShopAction() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	 static IMatcher1DialogueEntity*>*& _matcherDescription() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	 static IMatcher1DialogueEntity*>*& _matcherDestroyAction() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	 static IMatcher1DialogueEntity*>*& _matcherDiplomacyManagementAction() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	 static IMatcher1DialogueEntity*>*& _matcherEnemyInteract() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	 static IMatcher1DialogueEntity*>*& _matcherFinalizeAction() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	 static IMatcher1DialogueEntity*>*& _matcherFinishQuest() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	 static IMatcher1DialogueEntity*>*& _matcherGetQuest() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	 static IMatcher1DialogueEntity*>*& _matcherGiveQuest() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	 static IMatcher1DialogueEntity*>*& _matcherGrade() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	 static IMatcher1DialogueEntity*>*& _matcherIcon() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	 static IMatcher1DialogueEntity*>*& _matcherId() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	 static IMatcher1DialogueEntity*>*& _matcherInteractAction() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	 static IMatcher1DialogueEntity*>*& _matcherInteract() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	 static IMatcher1DialogueEntity*>*& _matcherLand() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	 static IMatcher1DialogueEntity*>*& _matcherLockAction() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	 static IMatcher1DialogueEntity*>*& _matcherLog() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	 static IMatcher1DialogueEntity*>*& _matcherMessage() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	 static IMatcher1DialogueEntity*>*& _matcherMiningAction() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	 static IMatcher1DialogueEntity*>*& _matcherNextDialogue() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	 static IMatcher1DialogueEntity*>*& _matcherOccupation() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	 static IMatcher1DialogueEntity*>*& _matcherOdinsCupAction() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	 static IMatcher1DialogueEntity*>*& _matcherOfferAction() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	 static IMatcher1DialogueEntity*>*& _matcherOldBlueprint() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	 static IMatcher1DialogueEntity*>*& _matcherOwner() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	 static IMatcher1DialogueEntity*>*& _matcherPage() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	 static IMatcher1DialogueEntity*>*& _matcherParameters() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	 static IMatcher1DialogueEntity*>*& _matcherPickupAction() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	 static IMatcher1DialogueEntity*>*& _matcherPortalAction() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	 static IMatcher1DialogueEntity*>*& _matcherPortal() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	 static IMatcher1DialogueEntity*>*& _matcherProgressQuest() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	 static IMatcher1DialogueEntity*>*& _matcherQuest() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	 static IMatcher1DialogueEntity*>*& _matcherRavenNestManagementAction() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	 static IMatcher1DialogueEntity*>*& _matcherRavenNestStatsAction() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	 static IMatcher1DialogueEntity*>*& _matcherRepairAction() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	 static IMatcher1DialogueEntity*>*& _matcherResurrectAction() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	 static IMatcher1DialogueEntity*>*& _matcherRewardQuest() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	 static IMatcher1DialogueEntity*>*& _matcherSaga() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	 static IMatcher1DialogueEntity*>*& _matcherSaveAction() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	 static IMatcher1DialogueEntity*>*& _matcherShieldManagementAction() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	 static IMatcher1DialogueEntity*>*& _matcherStartQuest() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	 static IMatcher1DialogueEntity*>*& _matcherStartTournamentAction() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	 static IMatcher1DialogueEntity*>*& _matcherTarget() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	 static IMatcher1DialogueEntity*>*& _matcherTempBuff() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	 static IMatcher1DialogueEntity*>*& _matcherTriptych() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	 static IMatcher1DialogueEntity*>*& _matcherUnlockAction() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	 static IMatcher1DialogueEntity*>*& _matcherUnlockContainerAction() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	 static IMatcher1DialogueEntity*>*& _matcherUnlockPortalAction() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	 static IMatcher1DialogueEntity*>*& _matcherWindow() {
		return *(IMatcher1DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}

	 static IMatcher1DialogueEntity*>* get_ActionId() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F12C4))(0);
	}
	 static IMatcher1DialogueEntity*>* get_Actor() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F1444))(0);
	}
	 static IMatcher1DialogueEntity*>* get_Alive() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F15E0))(0);
	}
	 static IMatcher1DialogueEntity*>* get_Analytics() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F177C))(0);
	}
	 static IMatcher1DialogueEntity*>* get_ApplyActivateStatue() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F1918))(0);
	}
	 static IMatcher1DialogueEntity*>* get_ApplyActorMagic() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F1AB4))(0);
	}
	 static IMatcher1DialogueEntity*>* get_ApplyConsume() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F1C50))(0);
	}
	 static IMatcher1DialogueEntity*>* get_ApplyLocationMagic() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F1DEC))(0);
	}
	 static IMatcher1DialogueEntity*>* get_ApplyOpenWindow() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F1F88))(0);
	}
	 static IMatcher1DialogueEntity*>* get_Blueprint() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F2124))(0);
	}
	 static IMatcher1DialogueEntity*>* get_Book() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F22C0))(0);
	}
	 static IMatcher1DialogueEntity*>* get_Button() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F245C))(0);
	}
	 static IMatcher1DialogueEntity*>* get_ContainerAction() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F25F8))(0);
	}
	 static IMatcher1DialogueEntity*>* get_CraftAction() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F2794))(0);
	}
	 static IMatcher1DialogueEntity*>* get_DailyShopAction() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F2930))(0);
	}
	 static IMatcher1DialogueEntity*>* get_Description() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F2ACC))(0);
	}
	 static IMatcher1DialogueEntity*>* get_DestroyAction() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F2C68))(0);
	}
	 static IMatcher1DialogueEntity*>* get_DiplomacyManagementAction() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F2E04))(0);
	}
	 static IMatcher1DialogueEntity*>* get_EnemyInteract() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F2FA0))(0);
	}
	 static IMatcher1DialogueEntity*>* get_FinalizeAction() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F313C))(0);
	}
	 static IMatcher1DialogueEntity*>* get_FinishQuest() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F32D8))(0);
	}
	 static IMatcher1DialogueEntity*>* get_GetQuest() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F3474))(0);
	}
	 static IMatcher1DialogueEntity*>* get_GiveQuest() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F3610))(0);
	}
	 static IMatcher1DialogueEntity*>* get_Grade() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F37AC))(0);
	}
	 static IMatcher1DialogueEntity*>* get_Icon() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F3948))(0);
	}
	 static IMatcher1DialogueEntity*>* get_Id() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F3AE4))(0);
	}
	 static IMatcher1DialogueEntity*>* get_InteractAction() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F3C80))(0);
	}
	 static IMatcher1DialogueEntity*>* get_Interact() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F3E1C))(0);
	}
	 static IMatcher1DialogueEntity*>* get_Land() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F3FB8))(0);
	}
	 static IMatcher1DialogueEntity*>* get_LockAction() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F4154))(0);
	}
	 static IMatcher1DialogueEntity*>* get_Log() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F42F0))(0);
	}
	 static IMatcher1DialogueEntity*>* get_Message() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F448C))(0);
	}
	 static IMatcher1DialogueEntity*>* get_MiningAction() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F4628))(0);
	}
	 static IMatcher1DialogueEntity*>* get_NextDialogue() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F47C8))(0);
	}
	 static IMatcher1DialogueEntity*>* get_Occupation() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F4968))(0);
	}
	 static IMatcher1DialogueEntity*>* get_OdinsCupAction() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F4B08))(0);
	}
	 static IMatcher1DialogueEntity*>* get_OfferAction() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F4CA8))(0);
	}
	 static IMatcher1DialogueEntity*>* get_OldBlueprint() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F4E48))(0);
	}
	 static IMatcher1DialogueEntity*>* get_Owner() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F4FE8))(0);
	}
	 static IMatcher1DialogueEntity*>* get_Page() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F5188))(0);
	}
	 static IMatcher1DialogueEntity*>* get_Parameters() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F5328))(0);
	}
	 static IMatcher1DialogueEntity*>* get_PickupAction() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F54C8))(0);
	}
	 static IMatcher1DialogueEntity*>* get_PortalAction() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F5668))(0);
	}
	 static IMatcher1DialogueEntity*>* get_Portal() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F5808))(0);
	}
	 static IMatcher1DialogueEntity*>* get_ProgressQuest() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F59A8))(0);
	}
	 static IMatcher1DialogueEntity*>* get_Quest() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F5B48))(0);
	}
	 static IMatcher1DialogueEntity*>* get_RavenNestManagementAction() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F5CE8))(0);
	}
	 static IMatcher1DialogueEntity*>* get_RavenNestStatsAction() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F5E88))(0);
	}
	 static IMatcher1DialogueEntity*>* get_RepairAction() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F6028))(0);
	}
	 static IMatcher1DialogueEntity*>* get_ResurrectAction() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F61C8))(0);
	}
	 static IMatcher1DialogueEntity*>* get_RewardQuest() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F6368))(0);
	}
	 static IMatcher1DialogueEntity*>* get_Saga() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F6508))(0);
	}
	 static IMatcher1DialogueEntity*>* get_SaveAction() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F66A8))(0);
	}
	 static IMatcher1DialogueEntity*>* get_ShieldManagementAction() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F6848))(0);
	}
	 static IMatcher1DialogueEntity*>* get_StartQuest() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F69E8))(0);
	}
	 static IMatcher1DialogueEntity*>* get_StartTournamentAction() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F6B88))(0);
	}
	 static IMatcher1DialogueEntity*>* get_Target() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F6D28))(0);
	}
	 static IMatcher1DialogueEntity*>* get_TempBuff() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F6EC8))(0);
	}
	 static IMatcher1DialogueEntity*>* get_Triptych() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F7068))(0);
	}
	 static IMatcher1DialogueEntity*>* get_UnlockAction() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F7208))(0);
	}
	 static IMatcher1DialogueEntity*>* get_UnlockContainerAction() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F73A8))(0);
	}
	 static IMatcher1DialogueEntity*>* get_UnlockPortalAction() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F7548))(0);
	}
	 static IMatcher1DialogueEntity*>* get_Window() {
		return ((IMatcher1DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F76E8))(0);
	}
	 static IAllOfMatcher1DialogueEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1DialogueEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x12F7888))(0, indices);
	}
	 static IAllOfMatcher1DialogueEntity*>* AllOf_1(Il2CppArray<IMatcher1DialogueEntity*>*>* matchers) {
		return ((IAllOfMatcher1DialogueEntity*>* (*)(void *, Il2CppArray<IMatcher1DialogueEntity*>*>*))(Il2CppBase() + 0x12F7900))(0, matchers);
	}
	 static IAnyOfMatcher1DialogueEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1DialogueEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x12F7978))(0, indices);
	}
	 static IAnyOfMatcher1DialogueEntity*>* AnyOf_1(Il2CppArray<IMatcher1DialogueEntity*>*>* matchers) {
		return ((IAnyOfMatcher1DialogueEntity*>* (*)(void *, Il2CppArray<IMatcher1DialogueEntity*>*>*))(Il2CppBase() + 0x12F79F0))(0, matchers);
	}

};

