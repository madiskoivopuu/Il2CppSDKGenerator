#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DialogueMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DialogueMatcher"));
	}

	 static IMatcher1<DialogueEntity*>*& _matcherActionId() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherActor() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherAlive() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherAnalytics() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherApplyActivateStatue() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherApplyActorMagic() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherApplyConsume() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherApplyLocationMagic() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherApplyOpenWindow() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherBlueprint() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherBook() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherButton() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherContainerAction() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherCraftAction() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherDailyShopAction() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherDescription() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherDestroyAction() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherDiplomacyManagementAction() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherEnemyInteract() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherFinalizeAction() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherFinishQuest() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherGetQuest() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherGiveQuest() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherGrade() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherIcon() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherId() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherInteractAction() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherInteract() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherLand() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherLockAction() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherLog() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherMessage() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherMiningAction() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherNextDialogue() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherOccupation() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherOdinsCupAction() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherOfferAction() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherOldBlueprint() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherOwner() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherPage() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherParameters() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherPickupAction() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherPortalAction() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherPortal() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherProgressQuest() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherQuest() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherRavenNestManagementAction() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherRavenNestStatsAction() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherRepairAction() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherResurrectAction() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherRewardQuest() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherSaga() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherSaveAction() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherShieldManagementAction() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherStartQuest() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherStartTournamentAction() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherTarget() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherTempBuff() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherTriptych() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherUnlockAction() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherUnlockContainerAction() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherUnlockPortalAction() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	 static IMatcher1<DialogueEntity*>*& _matcherWindow() {
		return *(IMatcher1<DialogueEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}

	 static IMatcher1<DialogueEntity*>* get_ActionId() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F12C4))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_Actor() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F1444))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_Alive() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F15E0))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_Analytics() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F177C))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_ApplyActivateStatue() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F1918))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_ApplyActorMagic() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F1AB4))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_ApplyConsume() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F1C50))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_ApplyLocationMagic() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F1DEC))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_ApplyOpenWindow() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F1F88))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_Blueprint() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F2124))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_Book() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F22C0))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_Button() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F245C))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_ContainerAction() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F25F8))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_CraftAction() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F2794))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_DailyShopAction() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F2930))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_Description() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F2ACC))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_DestroyAction() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F2C68))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_DiplomacyManagementAction() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F2E04))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_EnemyInteract() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F2FA0))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_FinalizeAction() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F313C))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_FinishQuest() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F32D8))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_GetQuest() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F3474))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_GiveQuest() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F3610))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_Grade() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F37AC))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_Icon() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F3948))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_Id() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F3AE4))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_InteractAction() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F3C80))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_Interact() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F3E1C))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_Land() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F3FB8))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_LockAction() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F4154))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_Log() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F42F0))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_Message() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F448C))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_MiningAction() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F4628))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_NextDialogue() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F47C8))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_Occupation() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F4968))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_OdinsCupAction() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F4B08))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_OfferAction() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F4CA8))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_OldBlueprint() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F4E48))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_Owner() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F4FE8))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_Page() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F5188))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_Parameters() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F5328))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_PickupAction() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F54C8))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_PortalAction() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F5668))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_Portal() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F5808))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_ProgressQuest() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F59A8))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_Quest() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F5B48))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_RavenNestManagementAction() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F5CE8))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_RavenNestStatsAction() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F5E88))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_RepairAction() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F6028))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_ResurrectAction() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F61C8))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_RewardQuest() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F6368))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_Saga() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F6508))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_SaveAction() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F66A8))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_ShieldManagementAction() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F6848))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_StartQuest() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F69E8))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_StartTournamentAction() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F6B88))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_Target() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F6D28))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_TempBuff() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F6EC8))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_Triptych() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F7068))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_UnlockAction() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F7208))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_UnlockContainerAction() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F73A8))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_UnlockPortalAction() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F7548))(0);
	}
	 static IMatcher1<DialogueEntity*>* get_Window() {
		return ((IMatcher1<DialogueEntity*>* (*)(void *))(Il2CppBase() + 0x12F76E8))(0);
	}
	 static IAllOfMatcher1<DialogueEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1<DialogueEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x12F7888))(0, indices);
	}
	 static IAllOfMatcher1<DialogueEntity*>* AllOf_1(Il2CppArray<IMatcher1<DialogueEntity*>*>* matchers) {
		return ((IAllOfMatcher1<DialogueEntity*>* (*)(void *, Il2CppArray<IMatcher1<DialogueEntity*>*>*))(Il2CppBase() + 0x12F7900))(0, matchers);
	}
	 static IAnyOfMatcher1<DialogueEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1<DialogueEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x12F7978))(0, indices);
	}
	 static IAnyOfMatcher1<DialogueEntity*>* AnyOf_1(Il2CppArray<IMatcher1<DialogueEntity*>*>* matchers) {
		return ((IAnyOfMatcher1<DialogueEntity*>* (*)(void *, Il2CppArray<IMatcher1<DialogueEntity*>*>*))(Il2CppBase() + 0x12F79F0))(0, matchers);
	}

};

