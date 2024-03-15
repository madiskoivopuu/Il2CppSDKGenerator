#pragma once

class MagicTriggerType
{

	None = 0,
	BeforeSelfHit = 1,
	BeforeTargetHit = 2,
	AfterSelfHit = 4,
	AfterTargetHit = 8,
	OnDeadlyHit = 16,
	OnTargetKill = 32,
	OnItemUse = 64,
	OnTargetCast = 128,
	OnSelfCast = 256,
	OnDismount = 512,
	ChildOnTargetCast = 1024,
	OnPlace = 2048,
	ChestOnDeath = 4096,
	Unlock = 8192,
	OnTargetPickup = 16384,
	OnSelfPickup = 32768,
	BeforeSelfHeal = 65536,
	BeforeTargetHeal = 131072,
	AfterSelfHeal = 262144

};

