#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DialogueMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DialogueMatcher"));
	}

	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherActionId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherAlive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherAnalytics() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherApplyActivateStatue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherApplyActorMagic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherApplyConsume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherApplyLocationMagic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherApplyOpenWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherBlueprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherBook() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherContainerAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherCraftAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherDailyShopAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherDescription() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherDestroyAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherDiplomacyManagementAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherEnemyInteract() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherFinalizeAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherFinishQuest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherGetQuest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherGiveQuest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherGrade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherInteractAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherInteract() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherLand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherLockAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherMiningAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherNextDialogue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherOccupation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherOdinsCupAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherOfferAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherOldBlueprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherOwner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherPage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherParameters() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherPickupAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherPortalAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherPortal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherProgressQuest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherQuest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherRavenNestManagementAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherRavenNestStatsAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherRepairAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherResurrectAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherRewardQuest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherSaga() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherSaveAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherShieldManagementAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherStartQuest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherStartTournamentAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherTempBuff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherTriptych() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherUnlockAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherUnlockContainerAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherUnlockPortalAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T& _matcherWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}

	template <typename T = IMatcher1DialogueEntity*>*> static T get_ActionId() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F12C4))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_Actor() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F1444))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_Alive() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F15E0))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_Analytics() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F177C))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_ApplyActivateStatue() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F1918))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_ApplyActorMagic() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F1AB4))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_ApplyConsume() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F1C50))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_ApplyLocationMagic() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F1DEC))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_ApplyOpenWindow() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F1F88))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_Blueprint() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F2124))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_Book() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F22C0))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_Button() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F245C))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_ContainerAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F25F8))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_CraftAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F2794))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_DailyShopAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F2930))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_Description() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F2ACC))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_DestroyAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F2C68))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_DiplomacyManagementAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F2E04))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_EnemyInteract() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F2FA0))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_FinalizeAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F313C))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_FinishQuest() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F32D8))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_GetQuest() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F3474))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_GiveQuest() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F3610))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_Grade() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F37AC))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_Icon() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F3948))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_Id() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F3AE4))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_InteractAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F3C80))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_Interact() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F3E1C))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_Land() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F3FB8))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_LockAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F4154))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_Log() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F42F0))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_Message() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F448C))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_MiningAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F4628))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_NextDialogue() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F47C8))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_Occupation() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F4968))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_OdinsCupAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F4B08))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_OfferAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F4CA8))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_OldBlueprint() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F4E48))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_Owner() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F4FE8))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_Page() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F5188))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_Parameters() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F5328))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_PickupAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F54C8))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_PortalAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F5668))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_Portal() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F5808))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_ProgressQuest() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F59A8))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_Quest() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F5B48))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_RavenNestManagementAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F5CE8))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_RavenNestStatsAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F5E88))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_RepairAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F6028))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_ResurrectAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F61C8))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_RewardQuest() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F6368))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_Saga() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F6508))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_SaveAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F66A8))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_ShieldManagementAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F6848))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_StartQuest() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F69E8))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_StartTournamentAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F6B88))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_Target() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F6D28))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_TempBuff() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F6EC8))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_Triptych() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F7068))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_UnlockAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F7208))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_UnlockContainerAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F73A8))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_UnlockPortalAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F7548))(0);
	}
	template <typename T = IMatcher1DialogueEntity*>*> static T get_Window() {
		return ((T (*)(void *))(Il2CppBase() + 0x12F76E8))(0);
	}
	template <typename T = IAllOfMatcher1DialogueEntity*>*> static T AllOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x12F7888))(0, indices);
	}
	template <typename T = IAllOfMatcher1DialogueEntity*>*> static T AllOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x12F7900))(0, matchers);
	}
	template <typename T = IAnyOfMatcher1DialogueEntity*>*> static T AnyOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x12F7978))(0, indices);
	}
	template <typename T = IAnyOfMatcher1DialogueEntity*>*> static T AnyOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x12F79F0))(0, matchers);
	}

};

